#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Point {
	long long x, y;
};


bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{


    if (l1.x == r1.x || l1.y == r2.y || l2.x == r2.x
        || l2.y == r2.y) {
      
        return false;
    }

  
    if (l1.x >= r2.x || l2.x >= r1.x)
        return false;

 
    if (l1.y <= r2.y || l2.y <= r1.y)
        return false;

    return true;
}

int overlappingArea(Point l1, Point r1,
					Point l2, Point r2)
{
	
	 
	
	long long area1 = abs(l1.x - r1.x)
	* abs(l1.y - r1.y);

	
	long long area2 = abs(l2.x - r2.x)
	* abs(l2.y - r2.y);

	
	long long x_dist = min(r1.x, r2.x)
				- max(l1.x, l2.x);
	long long y_dist = (min(r1.y, r2.y)
				- max(l1.y, l2.y));
	long long areaI = 0;
	if( x_dist > 0 && y_dist > 0 )
	{
		areaI = x_dist * y_dist;
	}
	
	return (area1 + area2 - areaI);
}


int main()
{
	ios:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

	
	long long t;
	cin>> t;
	while(t--){
		long long a,b,c,d,e,f,g,h;
		cin >> a>> b >>c >> d;
		cin >> e >> f >> g >> h;
		Point l1 = { a, b }, r1 = { c, d };
		Point l2 = { e, f }, r2 = { g, h };
		 if (!doOverlap(l1, r1, l2, r2))
       cout << overlappingArea(l1, r1, l2, r2)<< '\n';
		else{
			long long area1 = abs(l1.x - r1.x)
				* abs(l1.y - r1.y);

	
			long long area2 = abs(l2.x - r2.x)
			* abs(l2.y - r2.y);
				cout << area1 + area2 << '\n';
			}
		
        

	}
	
	
	return 0;
}

