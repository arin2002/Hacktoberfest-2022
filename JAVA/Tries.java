public class ListVocabulary implements Vocabulary {
    private List<String> words = new ArrayList<String>();

    /**
     * Constructor that adds all the words and then sorts the underlying list
     */
    public ListVocabulary(Collection<String> words) {
        this.words.addAll(words);
        Collections.sort(this.words);
    }

    public boolean add(String word) {
        int pos = Collections.binarySearch(words, word);
        // pos > 0 means the word is already in the list. Insert only
        // if it's not there yet
        if (pos < 0) {
            words.add(-(pos+1), word);
            return true;
        }
        return false;
    }

    public boolean isPrefix(String prefix) {
        int pos = Collections.binarySearch(words, prefix) ;
        if (pos >= 0) {
            // The prefix is a word. Check the following word, because we are looking 
            // for words that are longer than the prefix
            if (pos +1 < words.size()) {
                String nextWord = words.get(pos+1);
                return nextWord.startsWith(prefix);
            }
            return false;
        }
        pos = -(pos+1);
        // The prefix is not a word. Check where it would be inserted and get the next word.
        // If it starts with prefix, return true.
        if (pos == words.size()) {
            return false;
        }
        String nextWord = words.get(pos);
        return nextWord.startsWith(prefix);
    }

    public boolean contains(String word) {
        int pos = Collections.binarySearch(words, word);
        return pos >= 0;
    }
}
