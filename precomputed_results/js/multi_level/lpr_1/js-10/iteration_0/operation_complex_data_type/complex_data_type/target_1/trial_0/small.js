function opt() {
    const prototype = Array.prototype;
    const concat = prototype.concat;
    const filter = prototype.filter;
    const forEach = prototype.forEach;
    const map = prototype.map;
    const pop = prototype.pop;
    const push = prototype.push;
    const slice = prototype.slice;
    const some = prototype.some;
    const splice = prototype.splice;
    const length = prototype.length;

    const v1 = [];
    const v3 = v1.unshift(3848398693);
    const v5 = v3;
    const v6 = v5.toLocaleString();
    const v7 = v6.localeCompare(v3);
    return v7;
}