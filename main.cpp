class BankAccount:
    def __init__(self, account_number, account_holder_name, initial_balance=0.0):
        self.__account_number = account_number
        self.__account_holder_name = account_holder_name
        self.__account_balance = initial_balance

    def deposit(self, amount):
        if amount > 0:
            self.__account_balance += amount
            print(f"Deposited ${amount}. New balance: ${self.__account_balance:.2f}")
        else:
            print("Invalid deposit amount. Amount must be greater than 0.")

    def withdraw(self, amount):
        if 0 < amount <= self.__account_balance:
            self.__account_balance -= amount
            print(f"Withdrew ${amount}. New balance: ${self.__account_balance:.2f}")
        elif amount > self.__account_balance:
            print("Insufficient funds. Withdrawal not allowed.")
        else:
            print("Invalid withdrawal amount. Amount must be greater than 0.")

    def display_balance(self):
        print(f"Account Holder: {self.__account_holder_name}")
        print(f"Account Number: {self.__account_number}")
        print(f"Account Balance: ${self.__account_balance:.2f}")

# Testing the BankAccount class
if __name__ == "__main__":
    # Create a BankAccount instance
    my_account = BankAccount(account_number="12345", account_holder_name="John Doe", initial_balance=1000.0)

    # Display initial balance
    my_account.display_balance()

    # Perform some transactions
    my_account.deposit(500.0)
    my_account.withdraw(200.0)
    my_account.withdraw(1500.0)  # This will fail due to insufficient funds
    my_account.deposit(300.0)

    # Display the final balance
    my_account.display_balance()
