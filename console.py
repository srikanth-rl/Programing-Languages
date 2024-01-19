# import hashlib

# user_database = {}
# def is_valid_password(password):
#     if len(password) < 8 or len(password) > 15:
#         return False

#     special_characters = "!@#$%^&*(),.?\":{}|<>"
#     has_special_char = False
#     has_uppercase = False
#     has_lowercase = False
#     has_digit = False

#     for char in password:
#         if char in special_characters:
#             has_special_char = True
#         elif char.isupper():
#             has_uppercase = True
#         elif char.islower():
#             has_lowercase = True
#         elif char.isdigit():
#             has_digit = True

#     return has_special_char and has_uppercase and has_lowercase and has_digit


# def is_existing_user(username, email):
#     if username in user_database or email in user_database.values():
#         return True
#     return False
# # def email_verification(email):
# #     # Check if the email is verified
# #     if email in email_verification_tokens:
# #         token = email_verification_tokens[email]
# #         print(f"An email with a verification token has been sent to {email}.")
# #         user_input_token = input("Enter the verification token: ")
# #         if user_input_token == token:
# #             print("Email verified successfully.")
# #             return True
# #         else:
# #             print("Invalid verification token. Email verification failed.")
# #             return False
# #     else:
# #         print("Email not found in verification tokens. Email verification required.")
# #         return False

# # # Sample user registration
# # user_database['user1'] = {'email': 'user1@example.com', 'password': custom_hash('Password123')}
# # email_verification_tokens['user1@example.com'] = generate_verification_token()





# def change_password():
#     while 1:
#         email = print("Enter Your Email for verification: ",input())
#         if email in mail_l:
#             print("Change Password for User:", username)
#             current_password = input("Enter current password: ")
#             if custom_hash(current_password) == user_database[username]['password']:
#                 new_password = input("Enter new password: ")
#                 email = user_database[username]['email']

#                 if is_valid_password(new_password, username, email):
#                     if username not in password_history:
#                         password_history[username] = []
#                     if custom_hash(new_password) not in password_history[username][-3:]:
#                         user_database[username]['password'] = custom_hash(new_password)
#                         password_history[username].append(custom_hash(new_password))
#                         print("Password changed successfully.")
#                     else:
#                         print("New password matches one of the last three passwords. Choose a different password.")
#                 else:
#                     print("Invalid password format. Password should contain one special character, one uppercase character,"
#                         " one lowercase character, one digit, and be 8 - 15 characters long.")
#             else:
#                 print("Incorrect current password.")
#             break
    
# def custom_hash(password):
#     hash_value = 0
#     for char in password:
#         hash_value = (hash_value + ord(char)) % (2**32)  
#     return hex(hash_value)[2:]

# # Example usage:
# password = "#MyPassword13"
# hashed_password = custom_hash(password)
# print("Hashed Password:", hashed_password)

# def register_user():
#     while True:
#         username = input("Enter username: ")
#         email = input("Enter email: ")

#         if is_existing_user(username, email):
#             print("Username or email already exists. Please choose a different one.")
#         else:
#             break

#     while True:
#         password = input("Enter password: ")
#         if is_valid_password(password):
#             break
#         else:
#             print("Invalid password. Password should contain at least one special character, one uppercase letter, one lowercase letter, one digit, and be 8-15 characters long.")

#     date_of_birth = input("Enter date of birth (YYYY-MM-DD): ")

#     hashed_password = hashlib.sha256(password.encode()).hexdigest()

#     user_database[username] = {
#         "email": email,
#         "hashed_password": hashed_password,
#         "date_of_birth": date_of_birth,
#     }

#     print("Registration successful!")

# while True:
#     print("\nWelcome to the Registration System")
#     print("1. Register a new user")
#     print("2. Quit")
#     choice = input("Enter your choice: ")

#     if choice == '1':
#         register_user()
#     elif choice == '2':
#         print("Goodbye!")
#         break
#     else:
#         print("Invalid choice. Please select 1 or 2.")
class Flight:
    def __init__(self, name, number, departure_airport, arrival_airport, departure_date, departure_time, arrival_time, seats_available, status):
        self.name = name
        self.number = number
        self.departure_airport = departure_airport
        self.arrival_airport = arrival_airport
        self.departure_date = departure_date
        self.departure_time = departure_time
        self.arrival_time = arrival_time
        self.seats_available = seats_available
        self.status = status

# Initialize a list to store flight objects
flights = []

def admin_login():
    admin_password = "admin123"  # Change this to a more secure password
    password_attempt = input("Enter admin password: ")

    if password_attempt == admin_password:
        return True
    else:
        print("Incorrect password. Access denied.")
        return False

def view_flights():
    print("\nAll Flights:")
    for idx, flight in enumerate(flights, start=1):
        print(f"Flight {idx}:")
        print(f"Name: {flight.name}")
        print(f"Number: {flight.number}")
        print(f"Departure Airport: {flight.departure_airport}")
        print(f"Arrival Airport: {flight.arrival_airport}")
        print(f"Departure Date: {flight.departure_date}")
        print(f"Departure Time: {flight.departure_time}")
        print(f"Arrival Time: {flight.arrival_time}")
        print(f"Seats Available: {flight.seats_available}")
        print(f"Status: {flight.status}")
        print("")

def add_flight():
    name = input("Enter flight name: ")
    number = input("Enter flight number: ")
    departure_airport = input("Enter departure airport: ")
    arrival_airport = input("Enter arrival airport: ")
    departure_date = input("Enter departure date (YYYY-MM-DD): ")
    departure_time = input("Enter departure time (HH:MM AM/PM): ")
    arrival_time = input("Enter arrival time (HH:MM AM/PM): ")
    seats_available = int(input("Enter number of seats available: "))
    status = input("Enter flight status: ")

    flight = Flight(name, number, departure_airport, arrival_airport, departure_date, departure_time, arrival_time, seats_available, status)
    flights.append(flight)
    print("Flight added successfully.")

def edit_flight():
    view_flights()
    flight_idx = int(input("Enter the flight number you want to edit: ")) - 1

    if 0 <= flight_idx < len(flights):
        flight = flights[flight_idx]
        print(f"Editing Flight {flight_idx + 1} - {flight.name}")
        
        flight.name = input("Enter new flight name: ")
        flight.number = input("Enter new flight number: ")
        flight.departure_airport = input("Enter new departure airport: ")
        flight.arrival_airport = input("Enter new arrival airport: ")
        flight.departure_date = input("Enter new departure date (YYYY-MM-DD): ")
        flight.departure_time = input("Enter new departure time (HH:MM AM/PM): ")
        flight.arrival_time = input("Enter new arrival time (HH:MM AM/PM): ")
        flight.seats_available = int(input("Enter new number of seats available: "))
        flight.status = input("Enter new flight status: ")

        print("Flight information updated successfully.")
    else:
        print("Invalid flight number. Flight not found.")

def delete_flight():
    view_flights()
    flight_idx = int(input("Enter the flight number you want to delete: ")) - 1

    if 0 <= flight_idx < len(flights):
        deleted_flight = flights.pop(flight_idx)
        print(f"Flight {flight_idx + 1} - {deleted_flight.name} deleted successfully.")
    else:
        print("Invalid flight number. Flight not found.")

while True:
    print("\nOptions:")
    print("1. Admin Login")
    print("2. Exit")
    choice = input("Enter your choice: ")

    if choice == '1':
        if admin_login():
            while True:
                print("\nAdmin Menu:")
                print("1. View Flights")
                print("2. Add Flight")
                print("3. Edit Flight")
                print("4. Delete Flight")
                print("5. Logout")
                admin_choice = input("Enter your choice: ")

                if admin_choice == '1':
                    view_flights()
                elif admin_choice == '2':
                    add_flight()
                elif admin_choice == '3':
                    edit_flight()
                elif admin_choice == '4':
                    delete_flight()
                elif admin_choice == '5':
                    break
                else:
                    print("Invalid choice. Please select again.")
    elif choice == '2':
        break
    else:
        print("Invalid choice. Please select again.")
        
