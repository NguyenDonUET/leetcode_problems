#include <bits/stdc++.h>
using namespace std;
/*
    Cho một mảng gồm giá của các sp, trả về 1 mảng giá mới sau khi đã tính discount
    Trong mảng mới pt thứ i = prices[i] - prices[j]
    với prices[j] <= prices[i]
    và j > i
    Input: prices = [8,4,6,2,3]
    Output: [4,2,4,2,3]
    */
vector<int> finalPrices(vector<int> &prices)
{
    // Dùng stack để lưu index tăng dần của những pt mà chưa tìm thấy prices[j]
    stack<int> st;
    for (int i = 0; i < prices.size(); ++i)
    {
        // Thay đổi all những pt trước đó >= prices[i]
        while (!st.empty() && prices[i] <= prices[st.top()])
        {
            prices[st.top()] -= prices[i];
            st.pop();
        }
        st.push(i);
    }
    return prices;
}