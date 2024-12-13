#include "Stack.h"
int main()
{
    Stack st(10);
	for (int i = 0; i < 10; i++)
	{
		st.push(i);
	}
	st.show();
	for (int i = 0; i < st.count(); i++)
	{
		st.pop();
	}
	st.show();
	return 0;
}


