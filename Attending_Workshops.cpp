#include<bits/stdc++.h>

using namespace std;

struct Workshop
{
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops
{
    int n;
    vector<Workshop> m;    
};

Available_Workshops * initialize(int * s, int * d, int n)
{
    Available_Workshops * test = new Available_Workshops;
    Workshop w;
    test->n = n;
    for (int i = 0; i < n; i++)
    {
        w.start_time = s[i];
        w.duration = d[i];
        w.end_time = s[i] + d[i];
        test->m.push_back(w);
    }
    return test;
}

bool compare(Workshop w1, Workshop w2)
{
    return (w1.end_time < w2.end_time);
}

int CalculateMaxWorkshops(Available_Workshops * aw)
{
    sort(aw->m.begin(), aw->m.end(), compare);
    int last = -1;
    int max = 0;
    for (int i = 0; i < aw->n ; i++)
    {
        if (aw->m[i].start_time >= last)
        {
            last = aw->m[i].end_time;
            max++;
        }
    }
    return max;
}
//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
