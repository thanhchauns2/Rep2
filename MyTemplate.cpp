// By Nguyen Thanh Chau
// a.k.a Linh's servant - Ken
// En Taro Adun! - TemplarAssasin a.k.a Zeratul

// Libraries

#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
// #include <boost/math/constants/constants.hpp>
// #include <boost/cstdint.hpp>

// Defines
	
	// Typedefs
	
	#define ll long long
	#define pb push_back
	#define eb emplace_back
	#define cl(C) C.clear()
	#define cint cpp_int
	#define priority_queue pq
	#define priority_queue<int, vector<int>, greater<int> > reverse_pq
	
	//Commands
		
		// Clear containers
		
		#define reset(C) memset(C,0,sizeof(C))
		#define clearQueue(queue, x) queue = queue<x> ()
		#define fillVector(C,a) fill(C.begin(), C.end(), a)
		
		// Customize containers
		
		// Scan and print containers
		
		#define get(C,a) for(int i=0; i<a; i++) cin>>C[i]
		#define getVector(C) for(int i=0; i<C.size(); i++) cin>>C[i]
		#define getDeque(C) for(int i=0; i<C.size(); i++) cin>>C[i]
		#define getSet(C, a, token) for(int i=0; i<a; i++) { cin>>token; C.insert(token) }
		#define print(C,a) for(int i=0; i<a; i++) cout<<C[i]<<' '
		#define printVector(C) for(int i=0; i<C.size(); i++) cout<<C[i]<<' '
		#define printSet(C,x) for (set<x>::iterator it = C.begin(); it!= C.end(); ++it) cout<<*it<<' '
		#define printDeque(C) for(int i=0; i<C.size(); i++) cout<<C[i]<<' '
		
		// Converts between containers
		
		#define toSet(C,x) set<x> (C.begin(), C.end())
		#define toVector(C,x) vector<x> (C.begin(), C.end())
		#define toQueue(C,x) queue<x> (C.begin(), C.end())
		#define toDeque(C,x) deque<x> (C.begin(), C.end())
		#define toList(C,x) list<x> (C.begin(), C.end())
		#define toMultiset(C,x) multiset(C.begin(), C.end())
		
		// Iterators
		
		#define pointer(A,x) A<x>::iterator
		
	// Containers
	
	#define um(C,x,y) unordered_map<x,y> C
	
	// System
	
	#define faster() ios_base::sync_with_stdin(false); cin.tie(0); cout.tie(0);

// Namespaces

using namespace std;
// using namespace boost::multiprecision;
// using boost::multiprecision::cpp_dec_float_50;

//===================== Your code starts HERE =====================

int main()
{
	int F[3] = {3,4,5};
	vector<int> C(F, F+3);
	print(F,3);
}
