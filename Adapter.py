class XMLtoJSONAdapter:
    def init(self, xml_string):
        self.xml_string = xml_string.strip()

    def convert(self):
        return self.parse_xml(self.xml_string)

    def parse_xml(self, xml):
        json_data = {}
        while "<" in xml:
            start = xml.find("<") + 1
            end = xml.find(">", start)
            tag = xml[start:end]

            close_tag = f"</{tag}>"
            close_index = xml.find(close_tag)

            if close_index == -1:
                continue

            content = xml[end+1:close_index].strip()

            if "<" in content:
                json_data[tag] = self.parse_xml(content)
            else:
                json_data[tag] = content if content else None
            
            xml = xml[close_index + len(close_tag):].strip()

        return json_data

xml_data = """
<book>
    <title>My book</title>
    <author>I</author>
    <year>2025</year>
</book>
"""

adapter = XMLtoJSONAdapter(xml_data)
json_data = adapter.convert()
print(json_data)
