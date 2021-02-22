#ifdef NUMAR_RATIONAL
#define NUMAR_RATIONAL

#include <iostream>
using namespace std;

class NumarRational {
private:
	int numarator, numitor;
	void simplif();
public:
	NumarRational();
	NumarRational(double x);
	NumarRational(int numarator_ = 0, int numitor_ = 1);

	int getNumarator(); void setNumarator(int numarator_);
	int getNumitor(); void setNumitor(int numitor_);


		NumarRational& operator+(const NumarRational&);
		NumarRational& operator-(const NumarRational&);
		NumarRational& operator*(const NumarRational&);
		NumarRational& operator/(const NumarRational&);
		NumarRational& operator=(const NumarRational&);
		NumarRational& operator+=(const NumarRational&);
		NumarRational& operator-=(const NumarRational&);
		NumarRational& operator*=(const NumarRational&);
		NumarRational& operator/=(const NumarRational&);
		NumarRational& operator++();//prefix
		NumarRational  operator++(int);//postfix
		NumarRational& operator--();
		NumarRational operator--(int);
		NumarRational operator+() const;
		NumarRational operator-() const;

		bool operator==(const NumarRational&);
		bool operator!=(const NumarRational&);
		bool operator>(const NumarRational&);
		bool operator<(const NumarRational&);
		bool operator>=(const NumarRational&);
		bool operator<=(const NumarRational&);

		friend ostream& operator<<(ostream& out, const NumarRational&);
		friend istream& operator>>(istream& in, NumarRational&);

};
#endif
