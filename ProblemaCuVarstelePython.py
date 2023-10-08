person1 = {"name": "Arthur Morgan", "age": "1985-05-25"}
person2 = {"name": "John Marston", "age": "1985-05-20"}

from datetime import datetime

date1 = datetime.strptime(person1["age"], "%Y-%m-%d")
date2 = datetime.strptime(person2["age"], "%Y-%m-%d")

age_difference = date2 - date1

if age_difference.days > 0:
    print(f"{person1['name']} este mai în vârstă decât {person2['name']}.")
elif age_difference.days < 0:
    print(f"{person2['name']} este mai în vârstă decât {person1['name']}.")
else:
    print(f"{person1['name']} și {person2['name']} au aceeași vârstă.")
