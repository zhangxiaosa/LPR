function opt() {
    const v5 = 3848398693; // Number
    const v6 = v5.toLocaleString(); // String
    const v7 = v6.localeCompare(v5); // Number
    const v2 = v7; // Number (Same type as v7)
    return v7;
}