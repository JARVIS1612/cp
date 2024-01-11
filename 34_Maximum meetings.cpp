int maximumMeetings(vector<int> &start, vector<int> &end)
{
    // Write your code here.
    int n = start.size();
    vector<pair<int, int>> schedule;
    for(int i=0; i<n; i++)
      schedule.push_back(make_pair(end[i], start[i]));

    sort(schedule.begin(), schedule.end());
    int last_end_time, counter = 0, for_first_itr = 1;
    for(auto i: schedule)
    {
        if(for_first_itr==1 || last_end_time<i.second)
        {
            // cout << i.first << " " << i.second << endl;
            last_end_time = i.first;
            counter++;
            for_first_itr=0;
        }
    }
    return counter;
}