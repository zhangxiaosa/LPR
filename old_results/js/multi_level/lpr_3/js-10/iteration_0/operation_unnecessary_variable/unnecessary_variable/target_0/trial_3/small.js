function opt() {
    const v3Length = 1;
    const v6String = v3Length.toLocaleString();
    const v7Comparison = v6String.localeCompare(v3Length);
    return v7Comparison;
}