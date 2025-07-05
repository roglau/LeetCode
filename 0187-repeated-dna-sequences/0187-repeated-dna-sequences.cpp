class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length() < 10) return {};
        vector<string> res;
        unordered_set<string> set1, set2;
        for(int i = 0 ; i< s.length() - 9; i++){
            string dna = s.substr(i, 10);
            cout << dna << endl;
            if(set1.size() > 0 && set1.find(dna) != set1.end()){
                cout<<"masok";
                set2.insert(dna);
            }
            set1.insert(dna);
            
        }

        for(string dna : set2){
            res.push_back(dna);
        }

        return res;
    }
};