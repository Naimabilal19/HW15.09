
class Date
{
		int day;
		int month;
		int year;
	public:
		Date();
		Date(int d);
		Date(int d, int m);
		Date(int d, int m, int y);
		void Print()const;
		void SetDay(int p);
		void GetDay();
		void SetMonth(int p);
		void GetMonth();
		void SetYear(int p);
		void GetYear();

		Date operator+(int b);
		Date operator-(int b);
		Date& operator+(const Date& b);
		Date& operator-(const Date& b);
		Date& operator+=(int b);
		Date& operator-=(int b);
		bool operator>(const Date& c);
		bool operator<(const Date& c);
		bool operator>=(const Date& c);
		bool operator<=(const Date& c);
		bool operator==(const Date& c);
		bool operator!=(const Date& c);
};
