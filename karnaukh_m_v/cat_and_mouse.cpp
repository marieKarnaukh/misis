#include "VectorLib.hpp"
#include <iostream>
#include <cmath>
#include <fstream>

int main()
{
	vector r_cat{10, 0}; //������-������ �����
	vector r_mouse{0, -10}; //������-������ �����
	double v_cat = 5; //�������� �����
	double v_mouse = 4; //�������� �����
	vector h{ 0, 0 }; //�����
	double r = 0.3; //������ ��������� 
	vector vec_cat; //������ �������� �����
	vector vec_mouse; //������ �������� �����
	double dt = 0.05; //��� �� �������
	vector vec_h{ 0, 1 }; //������ � �����
	std::ofstream file;
	double sum = 0; 
	double distance = 10; //���������� ��� ������� ����� �������� ������ �� ����� � ����������
	double a_cat = 1; //��������� �����
	double a_mouse = 1; //��������� �����
	double a_const = 1.1; //���������� ��������� �����
	double sum_dt = dt;
	file.open("results.txt");
	while (r_mouse.y < 0 && Norm(r_mouse + r_cat) - r > 0)
	{
		vec_cat = (-r_cat + r_mouse) / Norm(-r_cat + r_mouse) * (v_cat * dt + a_cat * dt * dt / 2);
		r_cat = r_cat + vec_cat;
		v_cat = v_cat + a_cat * dt;
		if (Norm(r_mouse + r_cat) - distance < 0)
			a_mouse = a_mouse * a_const;
		if (Norm(r_mouse + r_cat) - distance < 0)
		{
			vec_mouse = (vec_cat + vec_h) / Norm(vec_cat + vec_h) * (v_mouse * dt + a_mouse * dt * dt / 2);
		}
		else vec_mouse = (-r_mouse) / Norm(r_mouse) * (v_mouse * dt + a_mouse * dt * dt / 2);
		r_mouse = r_mouse + vec_mouse;
		v_mouse = v_mouse + a_mouse * dt;

		//sum += Norm(vec_cat);
		//std::cout << r_mouse.x << " " << r_mouse.y << "\n";
		//file << r_cat.x << " " << r_cat.y << " " << r_mouse.x << " " << r_mouse.y << "\n";
		//std::cout << Norm(r_cat + r_mouse) << "\n";
		//std::cout << "\n";
		/*if (Norm(r_mouse + r_cat) - distance < 0)
		{
			vec_mouse = (vec_cat + vec_h) / Norm(vec_cat + vec_h) * v_mouse * dt;
		}
		else vec_mouse = (-r_mouse) / Norm(r_mouse) * v_mouse * dt;*/
		//vec_mouse = (-r_mouse) / Norm(r_mouse) * v_mouse * dt;
		//vec_cat = (-r_cat + r_mouse) / Norm(-r_cat + r_mouse) * v_cat * dt;
		
	}
	//std::cout << sum;
}