class massive {
private:
	const int n = 12;
	int* A = new int[n];
public:
	massive();
	~massive();
	void max();
	void product();
	void getmassive();
	void tranformation();
};

class My_Error {
public:
	My_Error() {
		cout << "Ошибка!\n";
	}
};

massive::massive() {
	int a;
	for (int t = 0; t < n; t++) {
		cout << "Введите целочисленное значение элемента " << t << ":  ";
		cin >> a;
		A[t] = a;
	}
}

massive::~massive() {
	delete[] A;
	cout << "Массив удален\n";
}

void massive::max() {
	int xm = A[0];
	for (int t = 1; t < n; t++) {
		if (A[t] > xm)
			xm = A[t];
	}
	cout << "Максимальное значение: " << xm << "\n";
}

void massive::product() {
	try {
		int xw = 1, p = 0, m = 0;
		for (int t = 0; t < n; t++) if (A[t] == 0) m = m + 1;
		if (m < 2) throw My_Error();
		try {
			for (int t = 0; t < n; t++) {
				if (A[t] == 0) {
					do {
						t = t + 1;
						xw = xw * A[t];
					} while (A[t + 1] != 0);
					p++;
					if (p > 1) throw 1;
					cout << "Произведение элементов, расположенных между первым и вторым нулевыми элементами массива, равно: " << xw << "\n";
				}
			}
		}
		catch (int) {
			cout << "Произведение между ПЕРВЫМ и ВТОРЫМ нулевыми элементами массива уже посчитано.\n";
		}
	}
	catch (My_Error) {
		cout << "Элементов равных 0 нет в массиве или он один\n";
	}
}

void massive::getmassive() {
	cout << "Массив: ";
	for (int t = 0; t < n; t++) cout << A[t] << "  ";
	cout << "\n";
}

void massive::tranformation() {
	int* b = new int[n];
	int k = 0;
	for (int t = 1; t < n; t += 2) {
		b[k] = A[t];
		k++;
	}
	for (int t = 0; t < n; t += 2) {
		b[k] = A[t];
		k++;
	}
	cout << "Преобразованный массив: ";
	for (int t = 0; t < n; t++) cout << b[t] << "  ";
	cout << "\n";
}

int main()
{
	system("color f1");
	setlocale(LC_ALL, "rus");
	massive a;
	a.getmassive();
	a.max();
	a.product();
	a.tranformation();
	system("pause");
	return 0;
}
