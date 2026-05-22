# Unit Tests

У даному файлі реалізовано unit-тести для перевірки роботи класів `Product` та `Order` за допомогою бібліотеки Microsoft Visual Studio Unit Testing Framework.

## Реалізовані тести

### Клас `Product`
- `DefaultProductConstructor` — перевірка конструктора за замовчуванням.
- `ProductConstructorWithValues` — перевірка конструктора з параметрами.
- `ProductSumTest` — перевірка обчислення загальної вартості товару.
- `AddQuantityTest` — перевірка збільшення кількості товару.

### Клас `Order`
- `OrderTotalWithoutDiscount` — перевірка обчислення суми замовлення без знижки.
- `OrderTotalWithDiscount` — перевірка застосування знижки до дня народження.
- `DuplicateProductsTest` — перевірка роботи з однаковими товарами у замовленні.

## Висновок

Створені unit-тести дозволяють перевірити правильність роботи основних методів класів `Product` та `Order`, коректність обчислення сум та застосування знижок.
