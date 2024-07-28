//https://www.naukri.com/code360/problems/browser_2427908?leftPanelTabValue=PROBLEM
#include<list>
#include<string>
using namespace std;
class Browser
{
	list<string> homepagelist;
	list<string>::iterator itr;
	public:
	
	Browser(string &homepage)
	{
		// Write you code here
		homepagelist.push_back(homepage);
		itr=homepagelist.begin();
	}

	void visit(string &url)
	{
		// erase forward history
		homepagelist.erase(next(itr),homepagelist.end());
		//add new url next to current pointer position
		homepagelist.push_back(url);
		itr=homepagelist.end();
		itr--; //since end() is one past the last element
	}
	
	string back(int steps)
	{
		while (steps > 0 && itr != homepagelist.begin()) {
			itr--;
			steps--;
		}
		return *itr;
	}

	string forward(int steps)
	{
		// Write you code here
		while (steps > 0 && next(itr) != homepagelist.end()) {
			itr++;
			steps--;
		}
		return *itr;
	}
};