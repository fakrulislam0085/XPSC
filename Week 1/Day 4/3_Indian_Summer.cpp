#School Team Contest 2 (Winter Computer School 2010/11)
#include <bits/stdc++.h>
using namespace std;

class countLeaves
{
    public:
        string species;
        string colour;
    countLeaves(string s1, string s2)
    {
        this->species = s1;
        this->colour = s2;
    }
};

bool operator<(const countLeaves &a, const countLeaves &b)
{
    if(a.species != b.species)
    {
        return a.species < b.species;  //comparing name first
    }
    return a.colour < b.colour;  //comparing colour
}

int main() {
	// your code goes here
    int n;
    cin >> n;
    
    vector <countLeaves> Leaves;
    set <countLeaves> UniqueLeaves;   //set stores only unique values
    
    for(int i=0; i<n; i++)
    {
       string species , colour;
       cin >> species >> colour;
       //make an object;
       countLeaves maininput(species, colour);
    
       //store main input
       Leaves.push_back(maininput);
       UniqueLeaves.insert(maininput);
       
    }
    
    // for(const auto &element : UniqueLeaves)
    // {
    //     //cout << element.species << " " << element.colour << '\n';
        
    // }
    
    cout << UniqueLeaves.size() << '\n';
    return 0;
    
}
