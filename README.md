<h1>OOP</h1>
<h2>Object-oriented programming</h2>

<h3>Лабораторная работа №1</h3>
<p>Цель работы: Изучить принципы создания классов, ограничения прав доступа к полям и методам класса, применив на практике знания базовых синтаксических конструкций языка C++ и объектно-ориентированного программирования.</p>
<p>Задание на лабораторную работу: В работе необходимо реализовать класс в соответствии с вариантом задания и создать приложение. Поля класса должны иметь спецификатор доступа private. Доступ к полям осуществляется через public методы. Конструкторы в этой работе не используем. Для присвоения значений полям класса использовать метод-«сеттер». В функции main() создается объект на основе созданного класса и осуществляется вызов методов класса. </p>
<p>Вариант 7: Целочисленные поля x и y представляют собой координаты клетки шахматной доски. Учитывая, что левое нижнее поле доски (1, 1) является черным, реализовать метод, проверяющий истинность высказывания: «Данное поле является белым».</p>
![image](https://github.com/wogusfer/OOP/assets/100072041/52cf3f1a-fae3-42a6-909d-bddbae201847)

<h3>Лабораторная работа №2</h3>
<p>Цель работы: Изучить принципы создания классов с конструкторами, применив на практике знания базовых синтаксических конструкций языка C++ и объектно-ориентированного программирования. Закрепить знания по теме «Классы, конструкторы, деструкторы».</p>
<p>Задание на лабораторную работу: В работе необходимо реализовать класс в соответствии с вариантом задания и создать приложение. В классе должен быть предусмотрены: - конструктор для установки начальных значений полей, -конструктор по умолчанию, -конструктор копирования, деструктор. Поля класса должны иметь спецификатор доступа private. Поля могут быть объявлены, как указатели. При использовании указателей в конструкторе класса должна быть инициализация полей, через оператор new, в деструкторе освобождение памяти, через оператор delete. Доступ к полям осуществляется через public методы. В функции main() создается не менее 3 объектов класса (с использованием всех конструкторов) и осуществляется вызов методов класса.</p>
<p>Вариант 7: Определите класс, содержащий информацию о комплексном числе. Класс должен содержать конструктор, который определяет комплексное число (действительную и комплексную составляющие), если параметров нет, то комплексное число установить равным 3+3i. Класс должен содержать функцию, выводящую комплексное число, ее параметром должен быть объект. Создать функцию, перемножающую два комплексных числа (в виде объектов) и возвращающую объект.</p>

<h3>Лабораторная работа №3</h3>
<p>Цель работы: Изучить механизм перегрузки операторов для типов, определенных пользователем посредством использования методов класса и дружественных функций.</p>
<p>Задание на лабораторную работу: В работе необходимо реализовать класс в соответствии с вариантом задания и создать приложение. В классе должен быть предусмотрен конструктор для установки начальных значений полей, методы – члены класса и дружественные методы, обеспечивающие перегрузку операций для заданного класса. Перегрузка операторов должна быть выполнена ДВУМЯ способами: использование метода класса и использование дружественной функции!!!</p>
<p>Вариант 7: Разработать класс «Комплексное число в тригонометрической форме». Определить в нем конструктор, перегрузить арифметические операции, операции сравнения, операцию преобразования в строку и метод получения комплексного числа из строки.</p>

<h3>Лабораторная работа №4</h3>
<p>Цель работы: Изучить механизм создания нового класса на основе уже существующего, варианты доступа к элементам базового класса из производного.</p>
<p>Задание на лабораторную работу: В работе необходимо реализовать базовый класс заданной структуры, на основе него создать производные классы. В нём предусмотреть конструктор для установки начальных значений полей. Создать объекты производных классов. Продемонстрировать работу всех методов, реализуемых в классах.</p>
<p>Вариант 7: Создать класс Points для хранения координат четырёх точек A, B, C и D на плоскости. В классе предусмотреть возможность распечатки координат каждой точки по отдельности и всех разом. На основе класса Points создать класс Quadrilateral для работы с четырёхугольником. Предусмотреть методы для проверки существования четырёхугольника, нахождения площади и диагоналей.</p>

<h3>Лабораторная работа №5</h3>
<p>Цель работы: Получение практических навыков при использовании множественного наследования в языке С++.</p>
<p>Задание на лабораторную работу:<br>
В работе необходимо построить иерархию классов согласно схеме наследования, приведенной в варианте задания. Каждый класс должен содержать:<br>
- инициализирующий конструктор<br>
- функцию show для вывода значений.<br>
- деструктор<br>
Функция main должна иллюстрировать иерархию наследования.</p>
Варианты заданий:<br>
![image](https://github.com/wogusfer/OOP/assets/100072041/57bd2226-5fea-412e-b418-42614995eebb)

<h3>Лабораторная работа №6</h3>
<p>Цель работы: Изучить принципы построения консольных приложений, применив на практике знания базовых синтаксических конструкций языка C++ и объектно-ориентированного программирования.</p>
<p>Задание на лабораторную работу:<br>
Создать класс Массив, содержащий:<br>
- одномерный целочисленный массив<br>
- размерность массива определяется суммой двух последних цифр шифра студента (если сумма получается меньше 12, то размерность массива будет равна 12)<br>
- поле, для хранения длины массива<br>
- конструктор, в котором осуществляется ввод данных в массив<br>
- расчетные функции (согласно варианта)<br>
- функцию вывода исходного массива<br>
- задействовать механизм обработки исключительных ситуаций (не менее 2-3 ситуаций)<br>
- одну из ситуаций обработать с использованием собственного класса исключений.</p>
Варианты заданий:<br>
![image](https://github.com/wogusfer/OOP/assets/100072041/8a792374-19b7-49a4-a61c-937ffe1aa528)

<h3>Лабораторная работа №7</h3>
<p>Цель работы: Изучить принципы построения консольных приложений, применив на практике знания базовых синтаксических конструкций языка C++ и объектно-ориентированного программирования. Обязательно использовать обобщенные алгоритмы.</p>
<p>Задание на лабораторную работу: Приложение должно осуществлять ввод и вывод информации о реализованном классе. Заполнить массив данных (vector) случайными числами в диапазоне m1 - m2. Выполнить набор действий при помощи обобщенных алгоритмов, объектов-функций и предикатов. После выполнения каждого действия выводить на экран результат.</p>
Варианты заданий:<br>
![image](https://github.com/wogusfer/OOP/assets/100072041/3cd621fd-2fac-4f3e-bcb7-cbcba351fd77)
