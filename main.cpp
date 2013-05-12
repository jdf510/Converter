#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> data;
    vector<string> output;

ifstream fin("rawdata.txt");
    if(fin.fail())
        {
            cerr << "Error reading" << endl;
        }
    else
        {
            string temp;
            while(fin >> temp)
                {
                    data.push_back(temp);
                }
        }
fin.close();

string m,p1,p2,r;
    for(int i=0; i < data.size(); i++)
        {
            m = data[i];
            for(int i=0; i < m.length(); i++)
                {
                    if(m[i] == ',')
                        {
                            m.erase(i,m.length());
                            break;
                        }
                }
        output.push_back(m);

            p1 = data[i];
            for(int i=0; i < p1.length(); i++)
                {
                    if(p1[i] == ',')
                        {
                            p1.erase(0,i+1);
                            break;
                        }
                }

            for(int i=0; i < p1.length(); i++)
                {
                    if(p1[i] == ',')
                        {
                            p1.erase(i,p1.length());
                            break;
                        }
                }
        output.push_back(p1);

            p2 = data[i];
            for(int i=0; i < p2.length(); i++)
                {
                    if(p2[i] == ',')
                        {
                            p2.erase(0,i+1);
                            break;
                        }
                }
            for(int i=0; i < p2.length(); i++)
                {
                    if(p2[i] == ',')
                        {
                            p2.erase(0,i+1);
                            break;
                        }
                }
            for(int i=0; i < p2.length(); i++)
                {
                    if(p2[i] == ',')
                        {
                            p2.erase(i,p2.length());
                            break;
                        }
                }
        output.push_back(p2);

            r = data[i];
        for(int i=0; i < 3;  i++)
        {
            for(int i=0; i < r.length(); i++)
                {
                    if(r[i] == ',')
                        {
                            r.erase(0,i+1);
                            break;
                        }
                }
        }
        output.push_back(r);
        }

ofstream fout("data.txt");
    if(fout.fail())
        {
            cerr << "Error writing" << endl;
        }
    else
        {
        for(int i=0; i < output.size(); i++)
            {
                fout << output[i] << endl;
                cout << i << "/" << output.size() << endl;
            }
        }
fout.close();

    return 0;
}
