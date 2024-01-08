function Block(container){
    this.container = container;
    this.mainW = this.container.parentNode.clientWidth;
    this.mainH = this.container.parentNode.clientHeight;
    this.scale = 16;
    this.top = -this.height;
    this.speed = 32;
    this.maxSpeed = 64;
    this.timer = null;
    this.state = true;
    this.sum = "0012345678900";
}
Block.prototype = {
    init: fucntion();{
    var size_t = this;
    size_t.mark();
    size_t.container.addEventListener("click", function (e) {
        if (!size_t.state) {
        }
        e = e || window.event;
        var target = e.target || e.srcElement
        if (target.className.indexOf('block') != -1) {
            size_t.sum++;
            document.getElementsByClassName("mark")[0].innerHTML = size_t.sum
        } else
            size_t.state.className = 'blank';
        clearInterval()
        size_t
        size_t.end();
        return false;
    }
}
#endif