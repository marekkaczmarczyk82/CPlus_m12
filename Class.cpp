#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

	class TClass
	{
		
		public:
			int r=1,t=2,y=3;

			void change( int a, int b, int c );

	};

			void TClass::change( int a, int b, int c )
			{
				r = a;
				t = b;
				y = c;
			}

	

			int main()
			{
				TClass Num;

				
					cout << "\tr>>>\t" << Num.r << "\tt>>>\t" << Num.t << "\ty>>>\t" << Num.y << endl;

				
					
						TClass Count;
				
							Count.change(122,128,222);

								cout << " **********************************************************\n\n";

								cout << "\tr*\t" << Count.r << "\tt*\t" << Count.t << "\ty*\t" << Count.y << endl;
					
			}
				

			
