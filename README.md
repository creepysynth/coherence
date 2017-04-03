# coherence

# Связность объектов

Схема:
Category 1 ------ * Item * ------ * Order * ------ 1 Customer

Category: получение всех товаров в категории, добавления и удаления товаров.

Item: задание категории, получение списка заказов. Товар без категории существовать не может.

Order: получение клиента, получение списка товаров, добавление/удаление товара. Клиента изменить нельзя. Заказ без товаров не существует, как не существет и без клиента.

Customer: получение всех заказов, добавление нового заказа.

Для каждого класса необходим метод для получения полного списка объектов. Необходимость создания нового объекта для получения списка будет фэйлом.
Продумать исключения.

Следим за именами методов. Не забываем геттеры. Продумываем логику.
Бонус: добавить уникальные идентификаторы для каждого класса.
Бонус: максимально использовать наследование. 
