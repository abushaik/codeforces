#include <iostream>
#include <string>

using namespace std;

int main()
{
    size_t n;
    string s;
    cin >> n >> s;

    bool lucky = true;
    int diff(0);
    n /= 2;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] != '4' && s[i] != '7') || (s[n+i] != '4' && s[n+i] !='7'))
        {
            lucky = false;
            break;
        }
        diff += (s[i] - s[n+i]);
    }
    if (lucky == true && diff==0){
    	cout << "YES" << endl;
	}
	
	else {
		cout << "NO" << endl;
	}
    return 0;
}
