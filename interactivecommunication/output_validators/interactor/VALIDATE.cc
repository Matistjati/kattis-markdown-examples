#include "validate.h"

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(i, a) for(auto& i : a)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main(int argc, char **argv) {
    init_io(argc, argv);

	string phase;
	judge_in >> phase;
	cout << phase << endl;
	if (phase == "encode") {
		string goal;
		string forbid;
		judge_in >> goal >> forbid;
		
		string user_send;
		cout << goal << endl;
		for (auto c : forbid)
		{
			cout << c << endl;
			char resp;
			if (!(cin >> resp)) wrong_answer("EOF");
			if (!(resp=='0' || resp=='1' || resp=='2' || resp=='3')) wrong_answer("Invalid character in guess");
			if (resp==c) wrong_answer("Game same as forbidden");
			user_send += resp;
		}
		std::ostringstream goalfilename;
		goalfilename << feedbackdir << '/' << "goal";
		ofstream goalfile(goalfilename.str());
		goalfile << goal << endl;

		std::ostringstream nextpassname;
		nextpassname << feedbackdir << '/' << "nextpass.in";
		ofstream nextpass(nextpassname.str());
		nextpass << "decode" << endl;
		nextpass << user_send << endl;
	}
	else
	{
		std::ostringstream goalfilename;
		goalfilename << feedbackdir << '/' << "goal";
		ifstream goalfile(goalfilename.str());
		string goal;
		goalfile >> goal;

		string sent;
		judge_in >> sent;
		cout << sent << endl;
		string ans;
		if (!(cin >> ans)) wrong_answer("EOF");
		if (goal != ans) wrong_answer("found wrong hidden string");
	}
    accept();
	return 0;
}
