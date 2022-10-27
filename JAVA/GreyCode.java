public ArrayList<String> graycode(int n) {

    if(n == 1) {
        ArrayList<String> mres = new ArrayList<>();
        mres.add("0");
        mres.add("1");
        return mres;
    }

    ArrayList<String> rres = graycode(n-1);
    ArrayList<String> mres = new ArrayList<>();

    for(int i=0; i<rres.size(); i++) {
        mres.add("0" + rres.get(i));
    }

    for(int i=rres.size()-1; i>=0; i--) {
        mres.add("1" + rres.get(i));
    }

    return mres;
}
