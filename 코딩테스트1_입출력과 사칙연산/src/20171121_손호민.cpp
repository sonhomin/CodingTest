#include<iostream>
#include<string>

using namespace std;

class Converter {
protected:
	double ratio;
	virtual double converter(double src) = 0; 
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다.";
		cout << getSourceString() << "을 입력하세요>>"; // getDestString() -> getSourceString()으로 변경
		cin >> src;
		cout << "변환결과 : " << converter(src) << getDestString() << endl;
	}
};

class  KmToMile : public Converter {
	string input, output;
protected:
	virtual double converter(double src);
	virtual string getSourceString() { return input; }
	virtual string getDestString() { return output; }

public:
	KmToMile(double ratio) : Converter(ratio) { 
		input = "km";
		output = "Mile";
	}
};

double KmToMile::converter(double src) {
	return src / ratio;
}

int main() {
	KmToMile transform(1.609344); //1마일은 1.609344km 로 변환
	transform.run();
}