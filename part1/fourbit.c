int main(void)
{
    uint8_t =attr;
    attr = attr ^ attr;
    attr = attr | 0b00000001;
    printf("attr: 0x%02x\n", attr);
    return 0;
}