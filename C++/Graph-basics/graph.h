#include <iostream>
#include <vector>
#include <unordered_map>
#include <functional>
using namespace std;

template <typename T>
class Graph
{
private:
    int nodes;
    unordered_map<T, bool> visited;
    void dfsHelper(
        T startVertex,
        function<void(T)> const &section1 = NULL,
        function<void(T)> const & = NULL,
        function<void(T)> const &section3 = NULL,
        function<void(T)> const &section4 = NULL
    );
    bool checkForLoopUsingDFS(T vertex, T parent);

public:
    unordered_map<T, vector<T>> graph;
    Graph(int n);
    void inputGraph();
    void dfs();
    void bfs(T vertex);  
    vector<vector<T>> components();
    bool ioopExists();
    void addEdge(T src, T dest);
    void dijkastra();
    ~Graph();
};

/*----------------------Constructor-------------------------------*/ 

template <typename T>
Graph<T>::Graph(int n)
{
    nodes = n;
}

/*----------------------inputGraph-------------------------------*/ 

template <typename T>
void Graph<T>::inputGraph()
{
    for (int i = 0; i < nodes; i++)
    {
        T vertex;
        cout << "Enter Vertex : " << endl;
        cin >> vertex;
        graph[vertex];
        cout << "Enter the no child vertices of vertex " << vertex << endl;
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            T child;
            cout << "Enter child " << j + 1 << endl;
            cin >> child;
            graph[vertex].push_back(child);
        }
    }
}

/*----------------------Add Edge-------------------------------*/

template <typename T>
void Graph<T>::addEdge(T src, T dest)
{
    if (graph.count(src) && graph.count(dest))
    { 
        // since undorected graph
        graph[src].push_back(dest);
        graph[dest].push_back(src);
    }
    else
    {
        cout << "Either of the given nodes doesn't exist";
    }
}

/*----------------------dfsHelper-------------------------------*/ 


template <typename T>
void Graph<T>::dfsHelper(
    T startVertex,
    function<void(T)> const &section1,
    function<void(T)> const &section2,
    function<void(T)> const &section3,
    function<void(T)> const &section4
)
{
    /**Section - 1
     * Take action on vetex after entering the vertex
     */
    if (section1)
        section1(startVertex);
    visited[startVertex] = true;

    for (auto child : graph[startVertex])
    {
        if (visited[child])
            continue;
        /**Section - 2
         * Take action on child after entering the child node of vertex
         */
        if (section2)
            section2(child);
        dfsHelper(child, section1, section2, section3, section4);
        /**Section - 3
         * Take action on child after entering the child node of vertex
         */
        if (section3)
            section3(child);
    }
    /**Section - 4
     * Take action on vetex before exiting the vertex
     */
    if (section4)
        section4(startVertex);
}


/*----------------------dfs traversal-------------------------------*/ 


template <typename T>
void Graph<T>::dfs()
{
    T startVertex;
    cout << "Enter vertex from where to start dfs" << endl;
    cin >> startVertex;
    dfsHelper(startVertex, [](T vertex){ 
        cout << vertex << " " << endl; 
    });
    visited.clear();
}


/*-----------------------BFS Traversal-------------------------------*/

template <typename T>
void Graph<T>::bfs(T vertex)
{
    queue<T> q;
    q.push(vertex);
    visited[vertex] = true;

    while (!q.empty())
    {
        T front = q.front();
        q.pop();
        cout<<front<<" ";
        for(auto child : graph[front])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }
    visited.clear();
}


/*----------------------components-------------------------------*/ 


template <typename T>
vector<vector<T>> Graph<T>::components()
{
    int count = 0;
    vector<vector<T>> cc;
    vector<T> currentComponent;
    for (auto node : graph)
    {
        // one dfs would mark visited to all the connected nodes
        if (visited[node.first])
            continue;
        currentComponent.clear();
        dfsHelper(node.first, [&currentComponent](T vertex){
            currentComponent.push_back(vertex); 
        });
        // so the no of times the dfs is called is the no of components
        cc.push_back(currentComponent);
    }
    visited.clear();
    return cc;
}


/*----------------------check for loop helper-------------------------------*/ 


template <typename T>
bool Graph<T>::checkForLoopUsingDFS(T vertex, T parent)
{
    visited[vertex] = true;
    bool loopExists = false;
    for (auto child : graph[vertex])
    {
        // if child is visited and that child is parent then it's normal
        if (visited[child] && child == parent)
            continue;
        // but if it is not parent then => there exists a loop
        if (visited[child])
            return true;
        // OR the result which will result in overall true if any true is recieved
        loopExists |= checkForLoopUsingDFS(child, vertex);
    }
    return loopExists;
}


/*----------------------loopExists-------------------------------*/ 


template <typename T>
bool Graph<T>::ioopExists()
{
    bool ans = false;
    T first = graph.begin()->first;
    // dfs would run only on one connected component
    // but we need to check for each component to make sure if loop exist in anyone of the components
    //  hence we are iterating through each vertex in the graph and continue if the node is visited in one dfs
    for (auto vertex : graph)
    {
        if (visited[vertex.first])
            continue;
        ans |= checkForLoopUsingDFS(vertex.first, vertex.first);
    }
    visited.clear();
    return ans;
}

template <typename T>
Graph<T>::~Graph()
{
    graph.clear();
}
