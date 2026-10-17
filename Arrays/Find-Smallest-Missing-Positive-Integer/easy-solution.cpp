int findSmallestMissingPositive(vector<int> &orderNumbers)
{
    //sort the vector in ascending order
    sort(orderNumbers.begin(), orderNumbers.end()); //drawback: this sorting can result in O(nlogn)
    int miss = 1; //set the missed integer as 1, because that is the value of the smallest positive integer that can be 'missing' in the vector

    //iterate through each element in the sorted vector
    for(auto i : orderNumbers)
    {
        //for every member in the sorted vector, check if the 'missed' member is already present
        if (miss == i)
            {
                //if the predicted missed member is present in the vector
                // increment the miss to next integer value
                miss+=1;
            }
    }
    //after the entire iteration of members in the vector, return miss
    return miss;
}
