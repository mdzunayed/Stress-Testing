g++ code.cpp -o code
g++ brute_force.cpp -o brute_force
g++ randomTestGen.cpp -o randomTestGen

for ((i=1; i<=100; i++)); do
    ./randomTestGen $i > randomInput
    ./code < randomInput > randomOutput
    ./brute_force < randomInput > bruteOutput
   
    if ! diff -w randomOutput bruteOutput > /dev/null; then
        echo -e "\nWA on test: $i 🥹\n"
        echo "Your answer is: "
        cat randomOutput
        echo "Correct answer is: "
        cat bruteOutput
        exit 1
    fi
    echo "Passed test: $i 😊"
done
echo -e "\nAll tests passed! 🎉"
