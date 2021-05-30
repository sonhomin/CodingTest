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
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�.";
		cout << getSourceString() << "�� �Է��ϼ���>>"; // getDestString() -> getSourceString()���� ����
		cin >> src;
		cout << "��ȯ��� : " << converter(src) << getDestString() << endl;
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
	KmToMile transform(1.609344); //1������ 1.609344km �� ��ȯ
	transform.run();
}