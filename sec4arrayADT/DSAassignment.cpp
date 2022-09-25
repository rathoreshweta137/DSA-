#include <bits/stdc++.h>
using namespace std;


int main()
{
    // n = total number of persons in university
    // m = Toatal number of groups

    int n , m;
    cout<<"Enter the number of persons:"<<endl;
    cin >> n ;
    cout<<"Enter total number of groups:"<<endl;
    cin>> m;

    vector<unordered_set<int>> groups;
    for (int i = 1; i <= m; i++)
    {
        unordered_set<int> group; // set

        int Groupsize;
        cout<<"Enter the group size:"<<endl;
        cin >> Groupsize;
        while (Groupsize--)
        {
            int group_member;
            cin >> group_member;
            group.insert(group_member); // insert
        }
        groups.push_back(group);
    }
    
    cout << endl;
    for (int s = 1; s <= n; s++)
    {
        unordered_set<int> checking;
        checking.insert(s);
        queue<int> q;
        q.push(s);
        while (!q.empty())
        {
            int p = q.front();
            q.pop();
            for (int i = 0; i < groups.size(); i++)
            {

                if (groups[i].find(p) != groups[i].end())
                {
                    for (auto person : groups[i])
                    {
                        if (!(checking.find(person) != checking.end()))
                        {
                            q.push(person);
                            checking.insert(person);
                        }
                    }
                }
            }
        }
        cout << checking.size() << " ";
    }

    cout << endl;



    return 0;
}
