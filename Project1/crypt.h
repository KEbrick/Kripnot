#pragma once
//Используем область видимости System
using namespace System;


//Запрашиваем ключ с помощью модальной фармы от VisualBasic (Пока не понадобилось)
//String^ key = Microsoft::VisualBasic::Interaction::InputBox(L"Введите ключ", L"Title", L"DefResp", 500, 500);


bool proof(String^ alf,wchar_t text) {
	// Функция проверки на вхождение символа в stiring массив 
	// Первый аргумент это массив, 2 аргумент это символ
	bool out = NULL;
	//Проганяем каджый симво массива 
	for (int k = 0; k != alf->Length; k++) {
		// Проверяем на соответвие нужного символа с символом массива
		if (Convert::ToString(text) == Convert::ToString(alf[k])) {
			//Если такой символ есть мы прерывем цикл и присваеваем переменной out - 1 (True)
			out = 1;
			break;
		}
		else {
			//Иначе False
			out = 0;
		}
	}
	//Проверяем на True or False и возвращаетм значение переменной
	if (out == 1) {
		return out;
	}
	else {
		return out;
	}
	
}



String^ encText(String^ text) {
	//
	// Функция шифрования теста
	// Первичный аргумент это - ТЕКСТ - который мы шифруем
	//

	//Шифрующий алфавит - string-array
	String^ endAlf = "z@#$%^&*_+=-cxqwertyuiopasdfghjkl";
	//Кириллический алфавит - string-array
	String^ alf =    "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
	//String массив закодированного текста
	String^ encText = "";

	//Цикл работает пока не проитерирует каджый символ тестового массва
	for (int j = 0; j != text->Length; j++) {
		//Вызываем функцию проверки на входжении 
		if (proof(alf, text[j])) {
			//Находим индекс символа и заменем его символом из шифрующего алфавита по индексу
			for (int i = 0; i != 33; i++) {
				if (text[j] == alf[i]) {
					encText += endAlf[i];
				}
			}
		}
		else {
			//Иначе мы не заменяя символ добавляем его к тексту 
			encText += text[j];
		}
	}

	return encText;
}



String^ decText(String ^ text) {
	//
	// Функция шифрования теста
	// Первичный аргумент это - ТЕКСТ - который мы шифруем
	//

	//Шифрующий алфавит - string-array
	String^ endAlf = "z@#$%^&*_+=-cxqwertyuiopasdfghjkl";
	//Кириллический алфавит - string-array
	String^ alf = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
	//String массив закодированного текста
	String^ decText = "";

	//Цикл работает пока не проитерирует каджый символ тестового массва
	for (int j = 0; j != text->Length; j++) {
		//Вызываем функцию проверки на входжении 
		if (proof(endAlf, text[j])) {
			//Находим индекс символа и заменем его символом из шифрующего алфавита по индексу
			for (int i = 0; i != 33; i++) {
				if (text[j] == endAlf[i]) {
					decText += alf[i];
				}
			}
		}
		else {
			//Иначе мы не заменяя символ добавляем его к тексту 
			decText += text[j];
		}
		
	}
	return decText;
}

