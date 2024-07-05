function opt() {
    const v1 = 3848398693;
    const v2 = [v1];
    const v3 = v2.unshift(v1);
    const v4 = v3.toString();
    const v5 = v4.localeCompare(v3.toString());
    return v5;
}