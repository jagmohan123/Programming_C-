#include<iostream>
using namespace std;
int main() {
	// int age;
	// cout<<"Enter your age"<<endl;
	// cin>>age;
	// i wanna show you agar age 18 se jyada hoti hai so me bol sakta hu you open your bank account

	//Normal If ho gya
	// if(age>=18){
	//     cout<<"You can open Bank account in SBI"<<endl;
	// }


	//If else ho gya // if ya else me dono mese koi ek hee run hoga time par
	// if(age>=18){
	//     cout<<"You can open Bank account in SBI"<<endl;
	// }
	// else
	// {
	//     cout<<"You can not  open Bank account in SBI"<<endl;
	// }


	//if else ladder

	// int salary;
	// cout<<"enter your salary"<<endl;
	// cin>>salary;

	// if(age>=18){
	//   if(salary<30000){
	//       cout<<"You are not eligible for the home loan of 6 lacks"<<endl;
	//   }
	//   else if(salary>=30000){
	//       cout<<"You are  eligible for the home loan of 6 lacks"<<endl;
	//       if(salary<=100000){
	//           cout<<"You are eligible for the only bike loan which amount is 11 lacks"<<endl;
	//       }
	//   }
	// }
	// else
	// {
	//     cout<<"You can not  open Bank account in SBI"<<endl;
	// }



// 	int marks;
// 	cout<<"Enter your marks"<<endl;
// 	cin>>marks;

// 	if(marks>100) {
// 		cout<<"Marks percentage can't not more than 100, enter valid mark b/w 1 to 100"<<endl;
//   // 		return 0;

// 	}
// 	if(marks>=75 && marks<=100) {
// 		cout<<"You scored 1st devision in gradution"<<endl;
// 	}
// 	else if(marks>=60 && marks<75) {
// 		cout<<"You scored 2nd devision in gradution"<<endl;
// 	}
// 	else if(marks>=45 && marks<60) {
// 		cout<<"You scored 3rd devision in gradution"<<endl;
// 	}
// 	else if(marks>=33 && marks<45) {
// 		cout<<"You only pass the gradution"<<endl;
// 	}

// 	else if(marks>100) {
// 		cout<<"Marks percentage can't not more than 100, enter valid mark b/w 1 to 100"<<endl;
// 	}

// 	else {
// 		cout<<"You have failed in gradution (Beda Garg)"<<endl;
// 	}


//Switch -> it is used to make the code moee readble

	int dayNo;
	cout<<"Enter the day number"<<endl;
	cin>>dayNo;


// yha par ya to integere case ya charater case aaega ya string bhi aa sakta hai uske alawa kuch nhi aaega

	switch(dayNo) {
	case 1:
		cout<<"this is monday"<<endl;

	case 2:
		cout<<"this is Tuesday"<<endl;
		break;

	case 3:
		cout<<"this is Wednesday"<<endl;
		break;

	case 4:
		cout<<"this is Thursday"<<endl;
		break;

	case 5:
		cout<<"this is Friday"<<endl;
		break;

	case 6:
		cout<<"this is Saturday"<<endl;
		break;

	case 7:
		cout<<"this is Sunday"<<endl;
		break;


	default:
		cout<<"You have enter day number more than 7 "<<endl;

	}

}