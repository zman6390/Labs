#1/bin/bash
sum=0
i="y"
echo "simple calculator"
echo "enter first number"
read n1 
echo "enter second number"
read n2
while [ $i = "y" ]
do
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "5. Modulo"
echo "Enter choice:"
 read ch
 case $ch in
1)sum=`echo "scale=4; $n1 + $n2"| bc -l`
echo "sum="$sum;;
2)sum=`echo "scale=4; $n1 - $n2"| bc -l`
echo "sub="$sum;;
3)sum=`echo "scale=4; $n1 * $n2"|bc -l`
echo "mul="$sum;;
4)sum=`echo "scale=2; $n1 / $n2"| bc -l`
echo "div="$sum;;
5)sum=`echo "scale=4; $n1 % $n2"| bc -l`
echo "mod="$sum;;
*)
echo "invalid choice";;
esac
echo "Do you want to continue?"
read i
if [ $i == "n" ]
then
break
elif [ $i== "N" ]
then break
#elif [$i=="CANC"]
#then break
#elif[$i=="CLEAR"]; 
#$clear
else
continue
fi
done

