#pragma once

//Class declaration for VectorCalculation class
class VectorCalculation {
private:
	double r;
	float angle;
	float x_component;
	float y_component;

public:
	VectorCalculation();
	VectorCalculation(float, float);
	VectorCalculation(double, float);
	void SetXComponent(float);
	void SetYComponent(float);
	void SetMagnitude(double);
	void SetAngle(float);
	float GetXComponent();
	float GetYComponent();
	double Getmagnitude();
	float Getangle();
	double CalculateMagnitude();
	float CalculateAngle();
	void operator+(VectorCalculation& other);
	void operator-(VectorCalculation& other);
	void operator*(const float);
	void operator/(const float);
	bool operator==(const VectorCalculation& other);
	void PrintValues(VectorCalculation& Vector);
	~VectorCalculation();
};


