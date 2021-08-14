//Title:- Sparse Arrays
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 10/8/2021

/*There is a collection of input strings and a collection of query strings.
 For each query string, determine how many times it occurs in the list of 
 input strings. Return an array of the results.*/


vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result;
    int count=0;
    for (unsigned int i=0;i<queries.size(); i++) {
        count=0;
        for (unsigned int j=0; j<strings.size(); j++) {
            if (std::equal(queries[i].begin(),queries[i].end(),strings[j])) 
            {
                count++;
            }
            result.push_back(count);
        }
    } 
    return result;       
}