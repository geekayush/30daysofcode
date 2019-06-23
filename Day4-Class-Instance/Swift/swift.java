class Person {
    var age: Int = 0

    init (initialAge: Int) {
        if initialAge < 0 {
            print("Age is not valid, setting age to 0.")
        }
        else {
            age = initialAge
        }
    }

    func amIOld () {
        if age >= 18 {
            print("You are old.")
        }
        else if age >= 13 {
            print("You are a teenager.")
        }
        else { // age is < 13
            print("You are young.")
        }
    }

    func yearPasses() {
        age += 1
    }
}