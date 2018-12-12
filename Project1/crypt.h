#pragma once
//���������� ������� ��������� System
using namespace System;


//����������� ���� � ������� ��������� ����� �� VisualBasic (���� �� ������������)
//String^ key = Microsoft::VisualBasic::Interaction::InputBox(L"������� ����", L"Title", L"DefResp", 500, 500);


bool proof(String^ alf,wchar_t text) {
	// ������� �������� �� ��������� ������� � stiring ������ 
	// ������ �������� ��� ������, 2 �������� ��� ������
	bool out = NULL;
	//��������� ������ ����� ������� 
	for (int k = 0; k != alf->Length; k++) {
		// ��������� �� ���������� ������� ������� � �������� �������
		if (Convert::ToString(text) == Convert::ToString(alf[k])) {
			//���� ����� ������ ���� �� �������� ���� � ����������� ���������� out - 1 (True)
			out = 1;
			break;
		}
		else {
			//����� False
			out = 0;
		}
	}
	//��������� �� True or False � ����������� �������� ����������
	if (out == 1) {
		return out;
	}
	else {
		return out;
	}
	
}



String^ encText(String^ text) {
	//
	// ������� ���������� �����
	// ��������� �������� ��� - ����� - ������� �� �������
	//

	//��������� ������� - string-array
	String^ endAlf = "z@#$%^&*_+=-cxqwertyuiopasdfghjkl";
	//������������� ������� - string-array
	String^ alf =    "��������������������������������";
	//String ������ ��������������� ������
	String^ encText = "";

	//���� �������� ���� �� ������������ ������ ������ ��������� ������
	for (int j = 0; j != text->Length; j++) {
		//�������� ������� �������� �� ��������� 
		if (proof(alf, text[j])) {
			//������� ������ ������� � ������� ��� �������� �� ���������� �������� �� �������
			for (int i = 0; i != 33; i++) {
				if (text[j] == alf[i]) {
					encText += endAlf[i];
				}
			}
		}
		else {
			//����� �� �� ������� ������ ��������� ��� � ������ 
			encText += text[j];
		}
	}

	return encText;
}



String^ decText(String ^ text) {
	//
	// ������� ���������� �����
	// ��������� �������� ��� - ����� - ������� �� �������
	//

	//��������� ������� - string-array
	String^ endAlf = "z@#$%^&*_+=-cxqwertyuiopasdfghjkl";
	//������������� ������� - string-array
	String^ alf = "��������������������������������";
	//String ������ ��������������� ������
	String^ decText = "";

	//���� �������� ���� �� ������������ ������ ������ ��������� ������
	for (int j = 0; j != text->Length; j++) {
		//�������� ������� �������� �� ��������� 
		if (proof(endAlf, text[j])) {
			//������� ������ ������� � ������� ��� �������� �� ���������� �������� �� �������
			for (int i = 0; i != 33; i++) {
				if (text[j] == endAlf[i]) {
					decText += alf[i];
				}
			}
		}
		else {
			//����� �� �� ������� ������ ��������� ��� � ������ 
			decText += text[j];
		}
		
	}
	return decText;
}

