function opt() {
    const v1 = 3848398693;
    const v2 = v1.toString();
    const v3 = v2.toLocaleString();
    const v4 = v1.toString();
    const v7 = v3.localeCompare(v4);
    return Number(v7);
}