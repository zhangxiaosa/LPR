function opt() {
    const v2 = Array.prototype;
    const v5 = v2.unshift(3848398693);  // Removed
    const v6 = v5.toLocaleString();  // Replaced v5 with Array.prototype
    const v7 = v6.localeCompare(Array.prototype);  // Replaced v3 with Array.prototype
    return v7;
}