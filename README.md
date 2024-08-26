# CPP Module 03

## 학습 내용
- 상속
- 가상 상속 (virtual)
- 다이아몬드 상속
- 함수의 오버로딩, 오버라이딩

## 과제 내용

### ex00
- 부모 클래스인 ClapTrap 생성
- attack, takeDamage, beRepaired 멤버함수 선언

### ex01
- 부모 클래스 ClapTrap을 상속받는 ScavTrap 생성
- attack 멤버함수 오버라이딩

### ex02
- 부모 클래스 ClapTrap을 상속받는 FragTrap 생성
- 부모 클래스에 없는 highFiveGuys 멤버 함수 생성

### ex03
- ScavTrap, FragTrap을 상속받는 DiamondTrap 생성
- DiamondTrap에서 ClapTrap으로 접근할 때 ScavpTrap, FragTrap 중에 어떤 ClapTrap을 접근해야할지 모호해짐
- 이 문제를 virtual 키워드를 사용하여 가상 상속으로 해결해서 하나의 ClapTrap만 존재하도록 함
