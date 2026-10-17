/*
 * Complete the 'countResponseTimeRegressions' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY responseTimes as parameter.
 */

int countResponseTimeRegressions(vector<int> responseTimes) {
    int count = 0;
    int64_t sum = 0;
    int vec_size = responseTimes.size();
    int64_t avg= 0;

    //check ff the received vector is empty
    if(!responseTimes.empty())
    {
        //vector is not empty
        sum = responseTimes[0];

        //iterate through the vector and check for condition
        for(int i = 1; i < vec_size; i++)
        {
            if((static_cast<int64_t>(responseTimes[i])*static_cast<int64_t>(i)) > sum)
            {
                count++;
            }
            sum+= responseTimes[i];
        }
    }
    return count;

}
