/* C++ implementation to convert infix expression to postfix*/
// Note that here we use std::stack for Stack operations
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
//Function to return precedence of operators
int prec(char c)
{
	if(c == '^')
	return 3;
	else if(c == '*' || c == '/')
	return 2;
	else if(c == '+' || c == '-')
	return 1;
	else
	return -1;
}
	string ns;

void infixToPostfix(string s)
{
	std::stack<char> st;
	st.push('N');
	int l = s.length();
	for(int i = 0; i < l; i++)
	{
		if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
         ns.pb(s[i]);
		else if(s[i] == '(') st.push('(');
		else if(s[i] == ')')
		{
			while(st.top() != 'N' && st.top() != '(')
			{
               ns.pb(st.top());
				st.pop();
			}
			if(st.top() == '(')	st.pop();
		}
		else{
			while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
			{
                ns.pb(st.top());
 				st.pop();
			}
			st.push(s[i]);
		}

	}
	while(st.top() != 'N')
	{
        ns.pb(st.top());
 		st.pop();
	}
	cout << ns << endl;

}
    string exp;

int main()
{
    int x;
    cin>>x;
    while(x--){
            exp.clear();
    cin>>exp;
    ns.clear();
	infixToPostfix(exp);
    }
	return 0;
}
// This code is contributed by Gautam Singh
