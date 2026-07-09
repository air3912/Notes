#pragma once 

int DaysInMonth( int, int ); 

class DATE {
    public:
		void Set( int, int, int );
		int getMonth() const;
		int getDay() const;
		int getYear() const;
		void Print() const;
		void Increment();
		void Decrement();
    private:
        int month;
        int day;
        int year;	
};

