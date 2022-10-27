import java.util.*;

/*
Question: https://www.interviewbit.com/problems/clone-graph/
 */

class Graph {
    public int val;
    public List<Graph> neighbors;
    public Graph() {
        val = 0;
        neighbors = new ArrayList<>();
    }
    public Graph(int _val) {
        val = _val;
        neighbors = new ArrayList<Graph>();
    }
    public Graph(int _val, ArrayList<Graph> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
}

public class CloneGraph {
    public static void main(String[] args) {

//        for demo only
        Map<Integer, Graph> map = new HashMap<>();
        map.put(1, new Graph(1));
        map.put(2, new Graph(2));
        map.put(3, new Graph(3));
        map.put(4, new Graph(4));

        map.get(1).neighbors.add(map.get(2));
        map.get(1).neighbors.add(map.get(4));

        map.get(2).neighbors.add(map.get(1));
        map.get(2).neighbors.add(map.get(3));

        map.get(3).neighbors.add(map.get(2));
        map.get(3).neighbors.add(map.get(4));

        map.get(4).neighbors.add(map.get(1));
        map.get(4).neighbors.add(map.get(3));

        Graph graph = map.get(1);

//        actual algo :-
        Graph newGraph = cloneGraph_method2(graph);
        System.out.println(newGraph.val);

    }

    private static Graph cloneGraph_method1(Graph graph) {
        if(graph == null) return null;
        Map<Integer, Graph> map = new HashMap<>();
        map.put(graph.val, new Graph(graph.val));
        helper_v1(graph, map, new HashSet<Graph>());
        return map.get(graph.val);
    }

    private static Graph cloneGraph_method2(Graph graph) {
        if(graph == null) return null;
        return helper_v2(graph, new HashMap<>());
    }

    private static void helper_v1(Graph graph, Map<Integer, Graph> map, HashSet<Graph> parsed) {
        for(Graph g : graph.neighbors){
            if(!parsed.contains(g)){
                map.put(g.val, new Graph(g.val));
                parsed.add(g);
                helper_v1(g, map, parsed);
                for(Graph connection : g.neighbors){
                    map.get(g.val).neighbors.add(map.get(connection.val));
                }
            }else{
                map.get(g.val).neighbors.add(graph);
            }
        }
    }

    private static Graph helper_v2(Graph graph, Map<Graph, Graph> parsed) {
        if(parsed.containsKey(graph))
            return parsed.get(graph);
        Graph copy = new Graph(graph.val);
        parsed.put(graph, copy);
        for (Graph g : graph.neighbors)
            copy.neighbors.add(helper_v2(g, parsed));
        return copy;
    }
}
