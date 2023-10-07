'''import pickle as pq
dec={}
def create():
	file=open("student.dat","wb")
	
	ans='y'
	try:
		while ans=='y':
			ad_number=int(input("enter the admission number->"))
			name=input("enter the student name->")
			percentage=float(input("enter the percentage of student->"))
			#adding data in dictionart
			dec['admission_number']=ad_number
			dec['Name']=name
			dec['Percentage']=percentage
			pq.dump(dec,file)
			ans=input("do you want to enter more data?(y/n)")
	except EOFError:
		file.close()

def countrec():
	file=open("student.dat","rb")
	count=0
	try:
		while True:
			data=pq.load(file)
			if dec['Percentage']>75:
				print(data)
				count=count+1
		
	except EOFError:
		print("there are",count,"of students who score 75% above")
		file.close()

create()
countrec()

'''

import mysql.connector as sqtor
mycon=sqtor.connect(host='localhost',user='root',passwd='quba',database='prep')
if mycon.is_connected()==False:
	print("prob. in connection")
cursor=mycon.cursor()
cursor.execute("delete from sports where StudentNo=11;")
'''data=cursor.fetchall()
count=cursor.rowcount
for i in range(count):
	print(data[i])'''
mycon.commit()

