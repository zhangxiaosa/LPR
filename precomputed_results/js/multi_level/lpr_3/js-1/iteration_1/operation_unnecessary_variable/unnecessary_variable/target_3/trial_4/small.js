function opt() {
    [].unshift(new Uint8Array());
    return Uint8Array.toLocaleString().padStart([].length);
}